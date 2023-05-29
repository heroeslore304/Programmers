#include <string>
#include <vector>

using namespace std;

struct node 
{
    string id;
    int count;
    node* reporter;
    node *next;
};

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    string str = report[0];
    size_t pos = str.find(' ');
    string reporter = report[0].substr(0, pos);
    string reported = report[0].substr(pos + 1);

    node* head = new node;
    node* repo = new node;

    head->id = reported;
    head->reporter = repo;
    head->next = nullptr;
    head->count = 1;

    repo->id = reporter;
    repo->reporter = nullptr;
    repo->next = nullptr;

    node *temp = head;
    for (int i = 1; i < report.size(); i++)
    {
        node* temp = head;
        string str = report[i];
        size_t pos = str.find(' ');
        string reporter = report[i].substr(0, pos);
        string reported = report[i].substr(pos + 1);

        while (temp->id != reported)
        {
            if (temp->next == nullptr)
            {
                node* next = new node;
                next -> id = reported;
                next->reporter = nullptr;
                next->next = nullptr;
                next->count = 0;

                temp-> next = next;
                temp = next;
            }
            else
            {
                temp = temp->next;
            }
        }
        node* ed = temp;
        
        if (temp->reporter == nullptr)
        {
            node* er = new node;
            er->id = reporter;
            er->reporter = nullptr;
            er->next = nullptr;

            temp->reporter = er;
            int count = ed->count;
            ed->count = count + 1;
        }
        else
        {
            temp = temp->reporter;
            while (temp->id != reporter)
            {
                if (temp->reporter == nullptr)
                {
                    node* er = new node;
                    er->id = reporter;
                    er->reporter = nullptr;
                    er->next = nullptr;

                    temp->reporter = er;
                    int count = ed->count;
                    ed->count = count + 1;
                }
                else
                {
                    temp = temp->reporter;
                }
            }
        }
    }
    vector<int> answer;
    for (int i = 0; i < id_list.size(); i++)
    {
        answer.push_back(0);
    }

    temp = head;
    while (temp != nullptr)
    {
        if (temp->count >= k)
        {
            node* er = temp->reporter;
            while (er != nullptr)
            {
                for (int i = 0; i < id_list.size(); i++)
                {
                    if (er->id == id_list[i])
                    {
                        answer[i] = answer[i] + 1;
                        break;
                    }
                }
                er = er->reporter;
            }
        }
        temp = temp->next;
    }
    return answer;
}
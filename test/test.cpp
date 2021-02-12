#include <iostream>
#include "stdlib.h"

#include "lists.h"

#define MAX_INPUT 2

void test_push_front_stub(monarch::Lists& list, const std::string (&input_list)[MAX_INPUT]) {
    size_t input_list_len = sizeof(input_list) / sizeof(input_list[0]);

    for (int i = 0; i < input_list_len; i++) {
        list.push_front(input_list[i]);
    }
}

void test_push_back_stub(monarch::Lists& list, const std::string (&input_list)[MAX_INPUT]) {
    size_t input_list_len = sizeof(input_list) / sizeof(input_list[0]);
    for (int i = 0; i < input_list_len; i++) {
        list.push_back(input_list[i]);
    }
}

void test_clear_list(monarch::Lists& list) {
    size_t list_size = list.lists_length();
    for (int i = 0; i < list_size; i++) {
        list.pop_front();
    }
}

void test_append_middle_node(monarch::Lists& list) {
    list.pushNodeAfterMiddle("middle");
    list.printList();
}

int main() {
    std::cout << "Sample linked lists program" << std::endl;
    std::string input_list[MAX_INPUT] =  { "item_one", "item_two" };
    monarch::Lists list;
    test_push_front_stub(list, input_list);
    test_push_back_stub(list, input_list);
    test_append_middle_node(list);
    test_clear_list(list);
    return 1;
}


#include "iostream"
#include "lists.h"

namespace monarch {

Lists::Lists()
    : m_head(NULL),
      m_tail(NULL),
      m_len(0) {
}

Lists::~Lists() {

}

void Lists::push_front(const std::string& data) {
    m_len++;
    if (m_head == NULL && m_tail == NULL) {
        m_head = m_tail = new Node(data);
        return;
    }

    Node * item = new Node(data);
    item->next_ = m_head;
    m_head = item;
}

void Lists::push_back(const std::string& data) {
    m_len++;
    if (m_head == NULL && m_tail == NULL) {
        m_head = m_tail = new Node(data);
        return;
    }
    Node* item = new Node(data);
    m_tail->next_ = item;
    m_tail = item;
}

void Lists::printList() const {
    if (m_head == NULL) {
        std::cout << "list is empty " <<  std::endl;
        return;
    }

    Node* iter = m_head;
    while(iter != NULL) {
       std::cout << __PRETTY_FUNCTION__ << "data:: " << iter->data_.c_str() <<  std::endl;
       iter = iter->next_;
    }
}

bool Lists::pushNodeAfterMiddle(const std::string& data) {
    m_len++;
    if (m_head == NULL && m_tail == NULL) {
        m_head = m_tail = new Node(data);
        return true;
    }
    Node* slow_iter = m_head;
    Node* fast_iter = m_head;
    while (fast_iter != NULL && fast_iter->next_ != NULL) {
        slow_iter = slow_iter->next_;
        fast_iter = fast_iter->next_->next_;
    }
    Node* iter = new Node(data);
    fast_iter = slow_iter->next_;
    slow_iter->next_ = iter;
    iter->next_ = fast_iter;
    return false;
}

std::string Lists::pop_front() {
    if (m_head == NULL) {
        std::cout << "list is empty" << std::endl;
        return "";
    }
    m_len--;
    Node* iter = m_head;
    m_head = iter->next_;
    std::string popped_data = iter->data_;
    delete iter;
    return popped_data;
}

size_t Lists::lists_length() const {
    return m_len;
}

} // namespace monarch

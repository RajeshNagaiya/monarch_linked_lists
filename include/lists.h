#ifndef LISTS_SAMPLE_H
#define LISTS_SAMPLE_H

namespace monarch {

/**
 * Lists provides the basic functionalities of single linked list.
 **/
class Lists {
public:
    struct Node {
        std::string data_;
        Node* next_;
        Node(const std::string& data): 
            data_(data),
            next_(NULL) {
        }
    };
    Lists();
    ~Lists();

    /**
     * Push the string data into the single linked list
     * @param data of type string
     * @return void
     */
    void push_front(const std::string& data);

    /**
     * Print the data of the single linked list
     * @return void
     */

    void printList() const;

    /**
     * Push the data node after the middle of the linked list
     * @param data of type string
     * @return true on success and false on failure
     */

    bool pushNodeAfterMiddle(const std::string& data);

    /**
     * Pop the top of the linked list
     * @return data of type string
     */
    std::string pop_front();

    /**
     * Push the string data at the back of the single linked list
     * @param data of type string
     * @return void
     */
    void push_back(const std::string& data);

    /**
     * Return the length of the single linked list
     * @return length of the list of type size_t
     */
    size_t lists_length() const;

private:
   Node* m_head;
   Node* m_tail;
   size_t m_len;
};

} // namespace monarch

#endif // LISTS_SAMPLE_H

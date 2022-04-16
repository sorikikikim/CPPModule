#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int n;
        std::vector<int> vector;
        Span();

    public:
        Span(unsigned int n);
        Span(const Span& s);
        Span& operator=(const Span& s);
        ~Span();

        class NoSpaceError : public std::exception {
            public:
                const char* what() const throw() {
                    return "No space to push";
                };
        };

        class NoSpanError : public std::exception {
            public:
                const char* what() const throw() {
                    return "No span to calculate";
                };
        };


        void addNumber(int num);
	    void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	    long shortestSpan() const;
	    long longestSpan() const;

};

#endif
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain( Brain const & brain );
		~Brain();
		Brain& operator=( const Brain& brain );
		
		std::string getIdeas(int i) const;
};


#endif /* ********************************************************** Brain_H */
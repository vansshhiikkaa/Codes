library(tidyverse)
library(rvest)
dat <- read_html("https://www.easyleadz.com/lists/List-of-Arts-and-Crafts-Companies-in-India")
name <- dat %>% html_elements(".container-sm a") %>% html_text()
i <- 1:104

name <- name[2*i]

name <- name[-2]
name <- name[-1]
name
names <- data.frame(name)
link <- dat %>% html_elements(".container-sm a") %>% html_attr("href")

link <- link[2*i]
links <- data.frame(link)
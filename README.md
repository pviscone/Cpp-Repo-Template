<a href="https://pviscone.github.io/Cpp-Repo-Template/">
  <img align="center" src="https://github.com/pviscone/Cpp-Repo-Template/actions/workflows/doxygen_deployment.yml/badge.svg" />
</a>
<a href="https://github.com/pviscone/Cpp-Repo-Template/actions/workflows/cmake.yml">
  <img align="center" src="https://github.com/pviscone/Cpp-Repo-Template/actions/workflows/cmake.yml/badge.svg?event=push" />
</a>



# TestWorkflow
A Repo Template for c++ project

The main features are:

- Makefile generation with CMake
- Static analyzer through compiler flags ( gdwarf-4 -fPIC -Wno-deprecated -pipe -fno-elide-type -fdiagnostics-show-template-tree -Wall  -Wextra -Wpedantic -Wvla -Wextra-semi -Wnull-dereference )

- Continuous integration with github action (build exploiting ccache)
- Autodoc and docs deployment with github action and github pages
- Testing with Catch2
- Build script to automatize makefile generation, docs deployment and building exploiting all existing threads

## Achtung!!!!

- Actions run on push to main branch and on pull request. **Work in a different branch and then merge to avoid useless waste of machine time**
- The Doxyfile in the docs folder build the documentation locally. The Doxyfile in the root folder is need to automatically build the docs on github

**Things to do when you create a new repository**:

1. Set github pages in /docs of the gh-pages branch. Put in the root of the branch the doxyfile and the dummy index.html (remember to change the repo name)
2. modify the badge' s links in the ReadMe.md to match the name of the new repo

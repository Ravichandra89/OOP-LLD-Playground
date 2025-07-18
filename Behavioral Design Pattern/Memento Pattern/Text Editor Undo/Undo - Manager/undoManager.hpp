#ifndef UNDO_MANAGER_HPP
#define UNDO_MANAGER_HPP

#include <stack>
#include <memory>
#include "../originator/originator.hpp"
#include "../memento/memento.hpp"

using namespace std;

class undoManager {
        // Methods - save(), undo(), canRedo()
        // Attributes - undoStack, redoStack
        stack<shared_ptr<DocumentMemento>> undoStack;
        stack<shared_ptr<DocumentMemento>> redoStack;

    public: 
        void save(const shared_ptr<DocumentMemento>& memento) {
            undoStack.push(memento);
            while(!redoStack.empty()) redoStack.pop();
        }

        shared_ptr<DocumentMemento> undo() {
            // Checking stack is empty or not
            if (!undoStack.empty()) return nullptr;
            // shared_ptr<DocumentMemento> ans = undoStack.top();
            auto ans = undoStack.top();
            undoStack.pop();
            redoStack.push(ans);
            return ans;
        }

        shared_ptr<DocumentMemento> redo() {
            if (!redoStack.empty()) return nullptr;
            auto ans = redoStack.top();
            redoStack.pop();
            undoStack.push(ans);
            return ans;
        }
};

#endif
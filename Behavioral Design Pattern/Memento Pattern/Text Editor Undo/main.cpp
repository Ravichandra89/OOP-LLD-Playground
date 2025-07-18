#include <iostream>
#include <memory>
#include "memento/memento.hpp"
#include "undoManager/undoManager.hpp"
#include "originator/originator.hpp"

using namespace std;

int main()
{
    Document doc;
    undoManager history;

    // Write "Hello"
    doc.type("Hello");
    history.save(doc.save());
    cout << " Current: " << doc.getContent() << endl;

    // Write ' World'
    doc.type(" World");
    history.save(doc.save());
    cout << " Current: " << doc.getContent() << endl;

    // First Undo Call
    auto ans = history.undo();
    if (ans)
    {
        doc.restore(ans);
        cout << "Undo: " << doc.getContent() << endl;
    }

    // First Redo Call
    auto redo = history.redo();
    if (redo)
    {
        doc.restore(ans);
        cout << "Redo: " << doc.getContent() << endl;
    }

    return 0;
}
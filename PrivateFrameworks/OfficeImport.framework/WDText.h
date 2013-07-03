/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDTableCell, NSMutableArray, WDDocument;

@interface WDText : NSObject  {
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    int mTextType;
    WDTableCell *mTableCell;
}


- (id)addTableAtIndex:(int)arg1;
- (id)addParagraphAtIndex:(int)arg1;
- (unsigned int)indexOfBlock:(id)arg1;
- (id)lastBlock;
- (id)blocks;
- (id)newBlockIterator;
- (id)blockIterator;
- (void)addBlock:(id)arg1;
- (id)newRunIterator;
- (id)runIterator;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;
- (id)addTable;
- (int)tableNestingLevel;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (int)textType;
- (id)addParagraph;
- (id)blockAt:(unsigned int)arg1;
- (unsigned int)blockCount;
- (id)tableCell;
- (id)document;
- (id)content;
- (BOOL)isEmpty;
- (void)dealloc;

@end
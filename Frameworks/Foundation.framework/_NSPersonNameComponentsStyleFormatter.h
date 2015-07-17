/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPersonNameComponentsStyleFormatter : NSObject {
    NSDictionary * _alterations;
    NSArray * _fallbackDescriptor;
    _NSPersonNameComponentsStyleFormatter * _fallbackStyleFormatter;
    BOOL  _ignoreDelimiter;
    NSSet * _keysOfInterest;
    NSLocale * _locale;
    NSPersonNameComponentsFormatter * _masterFormatter;
    NSArray * _orderedTemplate;
    int  _ordering;
    BOOL  _shouldFallBack;
}

@property (readonly) NSDictionary *alterations;
@property (readonly, copy) NSArray *fallbackDescriptor;
@property (retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter;
@property BOOL ignoreDelimiter;
@property (readonly) NSSet *keysOfInterest;
@property (readonly, copy) NSPersonNameComponentsFormatter *masterFormatter;
@property (readonly) NSArray *orderedKeysOfInterest;
@property (readonly) NSArray *orderedTemplate;
@property int ordering;
@property (readonly) BOOL shouldFallBack;

- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)_orderedNonEmptyKeysFromComponents:(id)arg1;
- (void)_releaseIvars;
- (id)alterations;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (void)dealloc;
- (id /* block */)defaultInitialsCreator;
- (id)fallbackDescriptor;
- (id)fallbackStyleFormatter;
- (void)finalize;
- (BOOL)fullComponentsAreValid:(id)arg1;
- (BOOL)ignoreDelimiter;
- (id)initWithMasterFormatter:(id)arg1;
- (id)keysOfInterest;
- (id)masterFormatter;
- (id)orderedKeysOfInterest;
- (id)orderedTemplate;
- (int)ordering;
- (void)setFallbackStyleFormatter:(id)arg1;
- (void)setIgnoreDelimiter:(BOOL)arg1;
- (void)setOrdering:(int)arg1;
- (BOOL)shouldFallBack;
- (id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2;

@end
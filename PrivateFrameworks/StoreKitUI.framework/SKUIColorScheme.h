/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {
    UIColor *_backgroundColor;
    UIColor *_highlightedTextColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

@property(readonly) int schemeStyle;
@property(copy) UIColor * backgroundColor;
@property(copy) UIColor * highlightedTextColor;
@property(copy) UIColor * primaryTextColor;
@property(copy) UIColor * secondaryTextColor;

+ (BOOL)supportsSecureCoding;

- (void)setSecondaryTextColor:(id)arg1;
- (id)secondaryTextColor;
- (void)setPrimaryTextColor:(id)arg1;
- (int)schemeStyle;
- (id)initWithColorSchemeDictionary:(id)arg1;
- (id)primaryTextColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
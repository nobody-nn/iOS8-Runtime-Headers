/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {
    AVTextStyleRuleInternal *_textStyleRule;
}

@property(readonly) NSDictionary * textMarkupAttributes;
@property(readonly) NSString * textSelector;

+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1;
+ (id)textStyleRulesFromPropertyList:(id)arg1;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
+ (id)propertyListForTextStyleRules:(id)arg1;

- (id)initWithTextMarkupAttributes:(id)arg1;
- (id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
- (id)_dictionaryPlistRepresentation;
- (id)textMarkupAttributes;
- (id)textSelector;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * definitionEntries;
@property(copy) NSString * origin;
@property(copy) NSString * partOfSpeech;
@property(copy) NSArray * synonyms;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)definitionGroup;

- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (void)setPartOfSpeech:(id)arg1;
- (id)partOfSpeech;
- (void)setDefinitionEntries:(id)arg1;
- (id)definitionEntries;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setOrigin:(id)arg1;
- (id)origin;

@end

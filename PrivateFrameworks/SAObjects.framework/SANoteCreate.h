/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SANoteCreate : SADomainCommand  {
}

@property(copy) NSString * contents;

+ (id)createWithDictionary:(id)arg1 context:(id)arg2;
+ (id)create;

- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setContents:(id)arg1;
- (id)contents;
- (id)groupIdentifier;

@end
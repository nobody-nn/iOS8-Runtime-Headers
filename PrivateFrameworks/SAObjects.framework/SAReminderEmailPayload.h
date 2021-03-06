/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSArray * recipientsTo;
@property(copy) NSString * subject;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)emailPayload;

- (void)setRecipientsTo:(id)arg1;
- (id)recipientsTo;
- (id)encodedClassName;
- (void)setSubject:(id)arg1;
- (id)subject;
- (id)groupIdentifier;

@end

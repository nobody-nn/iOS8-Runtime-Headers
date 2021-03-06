/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding> {
    bool_expiresOnNextTransaction;
    bool_allowDeepLink;
    NSString *_identifier;
    NSString *_content;
    NSDate *_messageDate;
    NSDate *_expirationDate;
}

@property(copy) NSString * identifier;
@property(copy) NSString * content;
@property(copy) NSDate * messageDate;
@property(copy) NSDate * expirationDate;
@property bool expiresOnNextTransaction;
@property bool allowDeepLink;

+ (id)paymentMessageWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setExpiresOnNextTransaction:(bool)arg1;
- (bool)expiresOnNextTransaction;
- (bool)isEqualToPaymentMessage:(id)arg1;
- (void)setAllowDeepLink:(bool)arg1;
- (void)setMessageDate:(id)arg1;
- (id)messageDate;
- (bool)allowDeepLink;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (void)setContent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)content;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end

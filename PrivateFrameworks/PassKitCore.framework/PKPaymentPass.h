/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSSet, NSURL, PKPaymentApplication;

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding> {
    bool_supportsDPANNotifications;
    bool_supportsFPANNotifications;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    NSSet *_associatedApplicationIdentifiers;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSSet *_paymentApplications;
    NSString *_appURLScheme;
    PKPaymentApplication *_devicePaymentApplication;
}

@property(copy) NSString * primaryAccountIdentifier;
@property(copy) NSString * primaryAccountNumberSuffix;
@property(readonly) NSString * deviceAccountIdentifier;
@property(readonly) NSString * deviceAccountNumberSuffix;
@property(readonly) unsigned long long activationState;
@property(copy) NSSet * associatedApplicationIdentifiers;
@property(copy) NSURL * transactionServiceURL;
@property(copy) NSString * transactionPushTopic;
@property(copy) NSURL * messageServiceURL;
@property(copy) NSString * messagePushTopic;
@property(copy) NSSet * paymentApplications;
@property(copy) NSString * appURLScheme;
@property bool supportsDPANNotifications;
@property bool supportsFPANNotifications;
@property(retain) PKPaymentApplication * devicePaymentApplication;

+ (bool)supportsSecureCoding;

- (void)setSupportsFPANNotifications:(bool)arg1;
- (void)setSupportsDPANNotifications:(bool)arg1;
- (void)setAppURLScheme:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (void)identifyDevicePaymentAppWithSecureElementID:(id)arg1 sanitize:(bool)arg2;
- (unsigned long long)activationState;
- (bool)supportsFPANNotifications;
- (bool)supportsDPANNotifications;
- (id)appURLScheme;
- (id)messagePushTopic;
- (id)messageServiceURL;
- (id)transactionPushTopic;
- (id)transactionServiceURL;
- (id)primaryAccountNumberSuffix;
- (id)primaryAccountIdentifier;
- (id)associatedApplicationIdentifiers;
- (id)devicePaymentApplication;
- (id)paymentApplications;
- (void)setDevicePaymentApplication:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setPaymentApplications:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)deviceAccountNumberSuffix;
- (id)deviceAccountIdentifier;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplicationForSecureElementID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
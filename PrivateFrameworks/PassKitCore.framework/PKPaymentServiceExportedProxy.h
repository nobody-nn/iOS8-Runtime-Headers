/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKPaymentServiceExportedInterface>;

@interface PKPaymentServiceExportedProxy : NSObject <PKPaymentServiceExportedInterface> {
    <PKPaymentServiceExportedInterface> *_delegate;
}

@property <PKPaymentServiceExportedInterface> * delegate;


- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidBeginTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidAuthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidActivate:(id)arg1;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidLeaveField;
- (void)paymentDeviceDidEnterField;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

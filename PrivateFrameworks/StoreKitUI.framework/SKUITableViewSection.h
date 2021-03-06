/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUITableViewSectionDelegate>;

@interface SKUITableViewSection : NSObject  {
    <SKUITableViewSectionDelegate> *_delegate;
    bool_hidesHeaderView;
    long long _sectionIndex;
}

@property <SKUITableViewSectionDelegate> * delegate;
@property bool hidesHeaderView;
@property long long sectionIndex;
@property(readonly) long long numberOfRowsInSection;


- (void)setHidesHeaderView:(bool)arg1;
- (bool)hidesHeaderView;
- (id)footerViewForTableView:(id)arg1;
- (id)headerViewForTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)setSectionIndex:(long long)arg1;
- (long long)sectionIndex;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end

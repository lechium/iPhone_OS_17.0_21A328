//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class CNAutocompleteResultsTableViewController, CNComposeRecipient, NSArray;

@protocol CNAutocompleteResultsTableViewControllerDelegate <NSObject>

@optional
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didEndDisplayingRowForRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willDisplayRowForRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsControllerWillBeginToScroll:(CNAutocompleteResultsTableViewController *)arg1;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didCollapseSelectedRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willCollapseSelectedRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didExpandSelectedRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willExpandSelectedRecipient:(CNComposeRecipient *)arg2;
- (_Bool)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willOverrideImageDataForRecipient:(CNComposeRecipient *)arg2 completion:(void (^)(NSData *))arg3;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didAskToRemoveRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 tintColorForRecipient:(CNComposeRecipient *)arg2 completion:(void (^)(UIColor *))arg3;
- (CNComposeRecipient *)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 preferredRecipientForRecipients:(NSArray *)arg2;
- (CNComposeRecipient *)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 preferredRecipientForRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didRequestInfoAboutRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2 atIndex:(unsigned long long)arg3;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/CNAutocompleteResultsTableViewController.h>

@class CKContactsSearchManager, IDSBatchIDQueryController, IMAccount, NSArray, NSDate, NSString;
@protocol CKRecipientSearchListControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController
{
    _Bool shouldHideGroupsDonations;	// 8 = 0x8
    _Bool _smsEnabled;	// 9 = 0x9
    NSArray *_enteredRecipients;	// 16 = 0x10
    NSArray *_prefilteredRecipients;	// 24 = 0x18
    IMAccount *_defaultiMessageAccount;	// 32 = 0x20
    IDSBatchIDQueryController *_statusQueryController;	// 40 = 0x28
    NSArray *_searchResults;	// 48 = 0x30
    CKContactsSearchManager *_searchManager;	// 56 = 0x38
    NSDate *_idsQueryStartTime;	// 64 = 0x40
    NSArray *_conversationCache;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004c1d0
@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) NSDate *idsQueryStartTime; // @synthesize idsQueryStartTime=_idsQueryStartTime;
@property(retain, nonatomic) CKContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(retain, nonatomic) IMAccount *defaultiMessageAccount; // @synthesize defaultiMessageAccount=_defaultiMessageAccount;
@property(nonatomic) _Bool smsEnabled; // @synthesize smsEnabled=_smsEnabled;
@property(retain, nonatomic) NSArray *prefilteredRecipients; // @synthesize prefilteredRecipients=_prefilteredRecipients;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
@property(nonatomic) _Bool shouldHideGroupsDonations; // @synthesize shouldHideGroupsDonations;
- (long long)idsStatusForAddress:(id)arg1;	// IMP=0x000000000004c01f
- (BOOL)_serviceColorForRecipients:(id)arg1;	// IMP=0x000000000004ba27
- (id)_statusQueryController;	// IMP=0x000000000004b9c2
- (id)_conversationList;	// IMP=0x000000000004b9a9
- (void)removeRecipient:(id)arg1;	// IMP=0x000000000004b2d6
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004b25f
@property(nonatomic) _Bool suppressGroupSuggestions;
- (void)invalidateSearchManager;	// IMP=0x000000000004b194
- (void)cancelSearch;	// IMP=0x000000000004b157
- (void)invalidateOutstandingIDStatusRequests;	// IMP=0x000000000004b115
- (_Bool)isSearchResultsHidden;	// IMP=0x000000000004b0b6
- (_Bool)hasSearchResults;	// IMP=0x000000000004b06e
- (void)searchWithText:(id)arg1;	// IMP=0x000000000004af23
- (void)chatStateChanged:(id)arg1;	// IMP=0x000000000004aeec
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x000000000004acca
- (id)conversationCacheForContactsSearchManager:(id)arg1;	// IMP=0x000000000004acb8
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;	// IMP=0x000000000004a779
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x000000000004a764
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000004a718
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000004a66c
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000004a664
- (void)viewDidAppearDeferredSetup;	// IMP=0x000000000004a554
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000004a507
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004a29d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004a1b5
- (void)loadView;	// IMP=0x000000000004a119
- (void)dealloc;	// IMP=0x000000000004a0ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKRecipientSearchListControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

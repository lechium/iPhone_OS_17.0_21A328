//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore, CNUIContactsEnvironment, _TtC10ContactsUI18DuplicatesUIHelper;
@protocol CNContactDataSource, CNDuplicateContactsControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNDuplicateContactsController : NSObject
{
    _Bool _isPerformingMerge;	// 8 = 0x8
    _Bool _isAlreadyFindingDuplicates;	// 9 = 0x9
    NSObject<CNContactDataSource> *_dataSource;	// 16 = 0x10
    id <CNDuplicateContactsControllerDelegate> _delegate;	// 24 = 0x18
    _TtC10ContactsUI18DuplicatesUIHelper *_duplicatesUIHelper;	// 32 = 0x20
    CNContactFormatter *_contactFormatter;	// 40 = 0x28
    CNUIContactsEnvironment *_environment;	// 48 = 0x30
    long long _newDuplicatesCount;	// 56 = 0x38
    long long _allDuplicatesCount;	// 64 = 0x40
    double _mergeCompletedAt;	// 72 = 0x48
}

+ (id)defaultContactFormatter;	// IMP=0x0010000000310b89
+ (id)defaultContactFormatterForDataSource:(id)arg1;	// IMP=0x0010000000310af8
+ (id)os_log;	// IMP=0x0010000000310ac8
- (void).cxx_destruct;	// IMP=0x0000000000310697
@property(nonatomic) double mergeCompletedAt; // @synthesize mergeCompletedAt=_mergeCompletedAt;
@property(nonatomic) _Bool isAlreadyFindingDuplicates; // @synthesize isAlreadyFindingDuplicates=_isAlreadyFindingDuplicates;
@property(nonatomic) long long allDuplicatesCount; // @synthesize allDuplicatesCount=_allDuplicatesCount;
@property(nonatomic) long long newDuplicatesCount; // @synthesize newDuplicatesCount=_newDuplicatesCount;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) _TtC10ContactsUI18DuplicatesUIHelper *duplicatesUIHelper; // @synthesize duplicatesUIHelper=_duplicatesUIHelper;
@property(nonatomic) _Bool isPerformingMerge; // @synthesize isPerformingMerge=_isPerformingMerge;
@property(nonatomic) __weak id <CNDuplicateContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void)didSelectUnignoreDuplicate:(id)arg1;	// IMP=0x00000000003105b5
- (void)didSelectIgnoreAllDuplicates:(id)arg1 signaturesIgnored:(id)arg2;	// IMP=0x00000000003105a3
- (void)didSelectMergeAllDuplicates:(id)arg1 signaturesToMerge:(id)arg2;	// IMP=0x000000000031058e
- (void)didPerformDuplicatesMerge;	// IMP=0x000000000031050a
- (void)willPerformDuplicatesMerge:(_Bool)arg1;	// IMP=0x000000000031044f
- (void)duplicatesDidChange;	// IMP=0x00000000003102df
- (void)performIgnoreAll;	// IMP=0x00000000003102bf
- (void)performMerge:(id)arg1;	// IMP=0x0000000000310137
- (void)decorateBannerViewCell:(id)arg1;	// IMP=0x00000000003100b0
- (void)presentDuplicatesUIFailureAlertForController:(id)arg1;	// IMP=0x000000000030ff49
- (void)presentSheetBasedMergeForController:(id)arg1 showsIgnored:(_Bool)arg2;	// IMP=0x000000000030fea4
- (_Bool)isInMergeCooldown:(long long)arg1;	// IMP=0x000000000030fe15
- (_Bool)canMergeDuplicates;	// IMP=0x000000000030fdde
- (_Bool)hasNewDuplicates;	// IMP=0x000000000030fdc5
- (_Bool)wantsToDisplayNewDuplicatesBanner:(long long)arg1;	// IMP=0x000000000030fd6e
- (void)ignoreNewDuplicatesBanner;	// IMP=0x000000000030fd3d
@property(nonatomic) long long lastIgnoredNewDuplicatesCount;
- (_Bool)isBusy;	// IMP=0x000000000030fc6d
- (void)updateDuplicatesCounts;	// IMP=0x000000000030fbdb
- (void)refreshManagedDuplicatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030fb42
- (void)refreshManagedDuplicates;	// IMP=0x000000000030fb2e
- (void)findDuplicates;	// IMP=0x000000000030fa2d
- (void)resetDuplicates;	// IMP=0x000000000030fa13
@property(readonly, nonatomic) CNContactStore *contactStore;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000030f7ab

@end

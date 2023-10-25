//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKFriendSuggesterSettings, GKRerankNetworkRequester, NSArray, NSString;

@interface GKSortSuggestionsModifier : NSObject
{
    CDUnknownBlockType _transactionGroupProvider;	// 8 = 0x8
    CDUnknownBlockType _featureEnabledBlock;	// 16 = 0x10
    GKRerankNetworkRequester *_networkRequester;	// 24 = 0x18
    GKFriendSuggesterSettings *_settings;	// 32 = 0x20
    NSArray *_cachedSortedAssociationIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001e4773
@property(retain, nonatomic) NSArray *cachedSortedAssociationIDs; // @synthesize cachedSortedAssociationIDs=_cachedSortedAssociationIDs;
@property(retain, nonatomic) GKFriendSuggesterSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) GKRerankNetworkRequester *networkRequester; // @synthesize networkRequester=_networkRequester;
@property(copy, nonatomic) CDUnknownBlockType featureEnabledBlock; // @synthesize featureEnabledBlock=_featureEnabledBlock;
@property(copy, nonatomic) CDUnknownBlockType transactionGroupProvider; // @synthesize transactionGroupProvider=_transactionGroupProvider;
- (id)sortSuggestions:(id)arg1 usingSortedContactsAssociationIDs:(id)arg2 suggestionMap:(id)arg3;	// IMP=0x00100000001e4214
- (id)modifySuggestions:(id)arg1;	// IMP=0x00100000001e3843
- (id)initWithSettings:(id)arg1 networkRequester:(id)arg2 cachedSortedAssociationIDs:(id)arg3 transactionGroupProvider:(CDUnknownBlockType)arg4 featureEnabledBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000001e3724

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

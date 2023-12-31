//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CNPhotoPickerProviderGroupDelegate, CNScheduler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderGroup : NSObject
{
    _Bool _allowAddItem;	// 8 = 0x8
    _Bool _showCircleMask;	// 9 = 0x9
    long long _groupType;	// 16 = 0x10
    id <CNPhotoPickerProviderGroupDelegate> _delegate;	// 24 = 0x18
    unsigned long long _itemsPerRow;	// 32 = 0x20
    NSArray *_providers;	// 40 = 0x28
    NSArray *_addItems;	// 48 = 0x30
    NSArray *_displayItems;	// 56 = 0x38
    NSArray *_addedItems;	// 64 = 0x40
    NSArray *_removedItems;	// 72 = 0x48
    NSMutableDictionary *_itemsGroupedByProvider;	// 80 = 0x50
    NSArray *_availablePaddingItems;	// 88 = 0x58
    NSArray *_removedPaddingItems;	// 96 = 0x60
    NSArray *_paddingItems;	// 104 = 0x68
    id <CNScheduler> _workQueue;	// 112 = 0x70
    id <CNScheduler> _providerItemRenderingQueue;	// 120 = 0x78
    id <CNScheduler> _callbackQueue;	// 128 = 0x80
}

+ (id)addItemsGroupWithProviders:(id)arg1 environment:(id)arg2;	// IMP=0x00100000000ab1fe
+ (id)emojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;	// IMP=0x00100000000ab17d
+ (id)animojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;	// IMP=0x00100000000ab0fc
+ (id)suggestionsGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;	// IMP=0x00100000000ab07b
+ (id)injectedItemsGroupWithEnvironment:(id)arg1;	// IMP=0x00100000000ab02e
- (void).cxx_destruct;	// IMP=0x00000000000aa8ef
@property(readonly, nonatomic) id <CNScheduler> callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <CNScheduler> providerItemRenderingQueue; // @synthesize providerItemRenderingQueue=_providerItemRenderingQueue;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *paddingItems; // @synthesize paddingItems=_paddingItems;
@property(retain, nonatomic) NSArray *removedPaddingItems; // @synthesize removedPaddingItems=_removedPaddingItems;
@property(retain, nonatomic) NSArray *availablePaddingItems; // @synthesize availablePaddingItems=_availablePaddingItems;
@property(retain, nonatomic) NSMutableDictionary *itemsGroupedByProvider; // @synthesize itemsGroupedByProvider=_itemsGroupedByProvider;
@property(retain, nonatomic) NSArray *removedItems; // @synthesize removedItems=_removedItems;
@property(retain, nonatomic) NSArray *addedItems; // @synthesize addedItems=_addedItems;
@property(retain, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic) NSArray *addItems; // @synthesize addItems=_addItems;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property(nonatomic) __weak id <CNPhotoPickerProviderGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showCircleMask; // @synthesize showCircleMask=_showCircleMask;
@property(readonly, nonatomic) _Bool allowAddItem; // @synthesize allowAddItem=_allowAddItem;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (void)providerItemDidUpdate:(id)arg1;	// IMP=0x00000000000aa6d5
- (_Bool)hasAddedProviderItems;	// IMP=0x00000000000aa68e
- (void)removeAllAddedProviderItems;	// IMP=0x00000000000aa657
- (long long)removeProviderItem:(id)arg1;	// IMP=0x00000000000aa265
- (long long)addProviderItem:(id)arg1;	// IMP=0x00000000000aa131
- (id)providerItemAtIndex:(long long)arg1;	// IMP=0x00000000000aa0b6
- (long long)numberOfItems;	// IMP=0x00000000000aa072
- (void)prepareDisplayItems:(id)arg1;	// IMP=0x00000000000a9faa
- (void)reloadDisplayItemsNotifyDelegate:(_Bool)arg1 requiresFullReload:(_Bool)arg2;	// IMP=0x00000000000a9da6
- (void)reloadDisplayItemsNotifyDelegate:(_Bool)arg1;	// IMP=0x00000000000a9d92
- (id)itemsForProviderIdentifier:(id)arg1;	// IMP=0x00000000000a9d18
- (void)setItemsPerRow:(unsigned long long)arg1 requiresFullReload:(_Bool)arg2;	// IMP=0x00000000000a9cf2
- (id)suggestionsProviderPrecedingFacesProvider;	// IMP=0x00000000000a9bdf
- (void)loadProvidersItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(_Bool)arg4;	// IMP=0x00000000000a9a80
- (id)initWithProviders:(id)arg1 groupType:(long long)arg2 environment:(id)arg3 allowAddItem:(_Bool)arg4;	// IMP=0x00000000000a98cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


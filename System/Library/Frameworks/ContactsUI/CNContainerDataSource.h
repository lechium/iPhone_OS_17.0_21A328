//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNContactViewCache, NSArray;

__attribute__((visibility("hidden")))
@interface CNContainerDataSource : NSObject
{
    _Bool _ignoresExchangeContainers;	// 8 = 0x8
    NSArray *_containerPickerItems;	// 16 = 0x10
    NSArray *_containers;	// 24 = 0x18
    CNContactStore *_store;	// 32 = 0x20
    CNContactViewCache *_contactViewCache;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x006000000025f6c3
- (void).cxx_destruct;	// IMP=0x000000000025f5e7
@property(retain, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool ignoresExchangeContainers; // @synthesize ignoresExchangeContainers=_ignoresExchangeContainers;
@property(retain, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(retain, nonatomic) NSArray *containerPickerItems; // @synthesize containerPickerItems=_containerPickerItems;
- (id)writableContainersForAccount:(id)arg1;	// IMP=0x000000000025f2bf
- (id)allAccounts;	// IMP=0x000000000025f156
- (void)discoverContainers;	// IMP=0x000000000025e69c
- (id)initWithContactStore:(id)arg1;	// IMP=0x000000000025e59a

@end


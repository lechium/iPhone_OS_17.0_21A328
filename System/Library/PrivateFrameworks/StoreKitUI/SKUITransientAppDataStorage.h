//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppDataStoring-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016cc7
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)clear;	// IMP=0x0000000000016bdf
- (void)removeDataForKey:(id)arg1;	// IMP=0x0000000000016ad5
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000016984
- (id)getDataForKey:(id)arg1;	// IMP=0x00000000000167d4
- (id)keyAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001661b
- (unsigned long long)count;	// IMP=0x00000000000164f9
- (id)init;	// IMP=0x0000000000016408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


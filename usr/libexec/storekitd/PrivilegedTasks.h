//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface PrivilegedTasks : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)removeIAPProductAtPath:(id)arg1;	// IMP=0x00400000000a73f6
+ (id)installReceiptData:(id)arg1 atBundlePath:(id)arg2;	// IMP=0x00100000000a735a
+ (id)copyIAPProductAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x00100000000a72ca
+ (id)sharedInstance;	// IMP=0x00100000000a7228
- (void).cxx_destruct;	// IMP=0x00200000000a7a5e
- (id)_removeIAPProductAtPath:(id)arg1;	// IMP=0x00100000000a78b8
- (id)_installReceiptData:(id)arg1 atBundlePath:(id)arg2;	// IMP=0x00100000000a76fb
- (id)_copyIAPProductAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x00100000000a751d
- (id)_serviceConnection;	// IMP=0x00100000000a7470

@end


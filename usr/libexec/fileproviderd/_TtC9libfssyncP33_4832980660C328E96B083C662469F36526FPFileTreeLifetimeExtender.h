//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9libfssyncP33_4832980660C328E96B083C662469F36526FPFileTreeLifetimeExtender : NSObject
{
    MISSING_TYPE *itemIdentifier;	// 8 = 0x8
    MISSING_TYPE *requestor;	// 16 = 0x10
    MISSING_TYPE *timeout;	// 24 = 0x18
    MISSING_TYPE *timeoutState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000162d40
- (id)init;	// IMP=0x0010000000162cf0
@property(nonatomic, readonly) NSString *prettyDescription;
@property(nonatomic, readonly) int requestEffectivePID;
@property(nonatomic) unsigned long long timeoutState; // @synthesize timeoutState;
@property(nonatomic, readonly) double timeout; // @synthesize timeout;

@end

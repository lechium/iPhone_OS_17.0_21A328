//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14photoanalysisd15ExecutiveBridge : NSObject
{
    MISSING_TYPE *executive;	// 8 = 0x8
    MISSING_TYPE *invoker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000000023c0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000002310
- (void)dumpStatusToLog;	// IMP=0x0010000000002270
- (void)shutdown;	// IMP=0x0010000000002020
- (void)startup;	// IMP=0x0010000000001d60
- (id)init;	// IMP=0x0010000000001bf0

@end

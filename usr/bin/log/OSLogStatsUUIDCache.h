//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface OSLogStatsUUIDCache : NSObject
{
    NSMutableArray *_paths;	// 8 = 0x8
    struct os_trace_uuid_map_s *_map;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005a01
- (void)processEvent:(id)arg1;	// IMP=0x00100000000058f9
- (void)setPath:(id)arg1 forUUID:(const char *)arg2;	// IMP=0x001000000000587f
- (id)pathForUUID:(const char *)arg1;	// IMP=0x0010000000005834
- (_Bool)hasUUID:(const char *)arg1;	// IMP=0x001000000000581c
- (id)init;	// IMP=0x001000000000578d

@end

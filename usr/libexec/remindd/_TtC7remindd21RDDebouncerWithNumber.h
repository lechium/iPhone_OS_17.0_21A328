//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd21RDDebouncerWithNumber : NSObject
{
    MISSING_TYPE *debouncer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00400000000ff700
- (id)init;	// IMP=0x00100000000ff6b0
- (void)fire:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ff5d0
- (id)initWithDebouncingInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ff4d0
@property(nonatomic) double debouncingInterval;

@end


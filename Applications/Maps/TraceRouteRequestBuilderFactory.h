//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TraceRouteRequestBuilder;

@interface TraceRouteRequestBuilderFactory : NSObject
{
    TraceRouteRequestBuilder *_builder;	// 8 = 0x8
    NSURL *_traceURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000882dce
@property(readonly, copy, nonatomic) NSURL *traceURL; // @synthesize traceURL=_traceURL;
- (id)makeRouteRequestBuilder;	// IMP=0x0010000000882db6
- (id)initWithTraceURL:(id)arg1;	// IMP=0x0010000000882d0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


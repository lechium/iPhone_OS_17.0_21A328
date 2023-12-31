//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUILoadTrendingSearchPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    NSURL *_pageURL;	// 16 = 0x10
    CDUnknownBlockType _outputBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000029d8df
@property(readonly, copy, nonatomic) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)main;	// IMP=0x000000000029d3b8
- (id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000029d291

@end


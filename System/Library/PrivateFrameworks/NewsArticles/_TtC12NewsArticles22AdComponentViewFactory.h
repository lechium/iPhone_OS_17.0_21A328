//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXComponentViewFactory.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC12NewsArticles22AdComponentViewFactory : SXComponentViewFactory
{
    MISSING_TYPE *resolver;	// 8 = 0x8
    MISSING_TYPE *bannerAdFactory;	// 48 = 0x30
    MISSING_TYPE *viewManager;	// 88 = 0x58
    MISSING_TYPE *requestManager;	// 96 = 0x60
    MISSING_TYPE *bannerAdRenderer;	// 104 = 0x68
    MISSING_TYPE *integrator;	// 144 = 0x90
    MISSING_TYPE *exposureMonitor;	// 184 = 0xb8
    MISSING_TYPE *journal;	// 192 = 0xc0
    MISSING_TYPE *trackerFactory;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000014e240
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4;	// IMP=0x000000000014e1b0
- (id)componentViewForComponent:(id)arg1;	// IMP=0x000000000014e160
@property(nonatomic, readonly) int role;
@property(nonatomic, readonly) NSString *type;

@end


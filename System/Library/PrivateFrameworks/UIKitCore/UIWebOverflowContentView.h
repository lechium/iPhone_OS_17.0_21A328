//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIWebOverflowContentView : UIView
{
    CALayer *_webLayer;	// 128 = 0x80
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
- (void)_setCachedSubviews:(id)arg1;	// IMP=0x000000000176c463
- (void)fixUpViewAfterInsertion;	// IMP=0x000000000176c42a
- (id)superview;	// IMP=0x000000000176c37b
- (void)willBeRemoved;	// IMP=0x000000000176c367
- (void)replaceLayer:(id)arg1;	// IMP=0x000000000176c32a
- (void)dealloc;	// IMP=0x000000000176c2dc
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000176c250

@end


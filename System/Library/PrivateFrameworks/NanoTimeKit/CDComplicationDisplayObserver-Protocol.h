//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@protocol CDComplicationDisplay;

@protocol CDComplicationDisplayObserver <NSObject>
- (void)complicationDisplay:(id <CDComplicationDisplay>)arg1 renderStatsWithTime:(double)arg2 cost:(double)arg3;
- (void)complicationDisplayNeedsResize:(id <CDComplicationDisplay>)arg1;
@end

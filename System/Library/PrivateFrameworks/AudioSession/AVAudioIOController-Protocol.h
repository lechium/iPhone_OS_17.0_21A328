//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioSession/NSObject-Protocol.h>

@protocol AVAudioIOController <NSObject>
@property(readonly, nonatomic) struct AVAudioTimeInterval dynamicLatency;
@property(readonly, nonatomic) _Bool supportsDynamicLatency;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) struct AVAudioIOPeriod IOPeriod;
- (struct AudioPresentationTimeStamp)presentationTime;
- (void)destroyIOEventBlock:(long long)arg1;
- (long long)createIOEventBlock:(void (^)(unsigned long long))arg1;
- (struct AudioTimeStamp)currentTime;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHASEListener, PHASESource;

__attribute__((visibility("hidden")))
@interface PHASEMixerParameterEntry : NSObject
{
    long long _mixerType;	// 8 = 0x8
    PHASESource *_source;	// 16 = 0x10
    PHASEListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017394d
@property(retain, nonatomic) PHASEListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) PHASESource *source; // @synthesize source=_source;
@property(nonatomic) long long mixerType; // @synthesize mixerType=_mixerType;
- (id)init;	// IMP=0x0000000000173889

@end

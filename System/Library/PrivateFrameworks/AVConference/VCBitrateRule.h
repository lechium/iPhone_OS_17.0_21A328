//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCBitrateRule : NSObject
{
    unsigned int _bitrate;	// 8 = 0x8
    int _connectionType;	// 12 = 0xc
    VCVideoRule *limitingRule;	// 16 = 0x10
}

@property(readonly, nonatomic) VCVideoRule *limitingRule; // @synthesize limitingRule;
@property int connectionType; // @synthesize connectionType=_connectionType;
@property unsigned int bitrate; // @synthesize bitrate=_bitrate;
- (void)dealloc;	// IMP=0x000000000042ec04
- (id)description;	// IMP=0x000000000042ebd0
- (long long)compare:(id)arg1;	// IMP=0x000000000042eb89
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;	// IMP=0x000000000042eb00

@end


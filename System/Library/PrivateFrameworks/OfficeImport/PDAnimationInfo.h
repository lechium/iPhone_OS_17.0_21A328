//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDAnimationInfoData, PDMediaNode;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : NSObject
{
    PDAnimationInfoData *mEntrance;	// 8 = 0x8
    PDAnimationInfoData *mExit;	// 16 = 0x10
    PDAnimationInfoData *mMedia;	// 24 = 0x18
    PDMediaNode *mediaNode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000043e904
@property(retain, nonatomic) PDMediaNode *mediaNode; // @synthesize mediaNode;
@property(retain, nonatomic) PDAnimationInfoData *mediaData; // @synthesize mediaData=mMedia;
- (id)description;	// IMP=0x000000000043e890
- (id)exitData;	// IMP=0x000000000043e882
- (void)setExitData:(id)arg1;	// IMP=0x000000000043e871
- (id)entranceData;	// IMP=0x000000000043e863
- (void)setEntranceData:(id)arg1;	// IMP=0x000000000043e852

@end


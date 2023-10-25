//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

__attribute__((visibility("hidden")))
@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource
{
    CKMediaObject *_mediaObject;	// 8 = 0x8
    CKBalloonView *_balloonView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010539d
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)previewDidChange:(id)arg1;	// IMP=0x00000000001051d9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000104f45
- (id)imageBalloon;	// IMP=0x0000000000104cd0
- (id)initWithPluginPayload:(id)arg1;	// IMP=0x0000000000104c39

@end

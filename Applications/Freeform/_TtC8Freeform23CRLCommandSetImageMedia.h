//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSUUID, _TtC8Freeform8CRLAsset;

@interface _TtC8Freeform23CRLCommandSetImageMedia
{
    MISSING_TYPE *id;	// 6386785 = 0x617461
    MISSING_TYPE *imageData;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *thumbnailData;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000091df40
- (id)init;	// IMP=0x001000000091de90
- (id)initWithImageItem:(id)arg1 imageData:(id)arg2 thumbnailData:(id)arg3;	// IMP=0x001000000091dc00
- (id)initWithId:(id)arg1 imageData:(id)arg2 thumbnailData:(id)arg3;	// IMP=0x001000000091dae0
- (id);	// IMP=0x001000000091d9e0
@property(nonatomic, readonly) _TtC8Freeform8CRLAsset *imageData; // @synthesize imageData;
@property(nonatomic, readonly) NSUUID *id;

// Remaining properties
@property(nonatomic, readonly) _TtC8Freeform8CRLAsset *thumbnailData; // @synthesize thumbnailData;

@end


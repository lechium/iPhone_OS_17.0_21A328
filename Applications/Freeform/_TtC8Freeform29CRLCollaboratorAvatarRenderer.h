//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, MISSING_TYPE;

@interface _TtC8Freeform29CRLCollaboratorAvatarRenderer : NSObject
{
    MISSING_TYPE *contact;	// 8 = 0x8
    MISSING_TYPE *size;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000009eae80
- (id)init;	// IMP=0x00100000009eae20
- (id)renderPlaceholderAvatarImageWithContentsScale:(double)arg1;	// IMP=0x00100000009eadd0
- (id)renderAvatarImageWithContentsScale:(double)arg1;	// IMP=0x00100000009eac80
- (id)initWithContact:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00100000009ea970
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic, retain) CNContact *contact; // @synthesize contact;

@end


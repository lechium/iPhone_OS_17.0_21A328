//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDocumentPickerContainerItem.h"

@class BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem
{
    NSString *_cachedSubtitle;	// 88 = 0x58
    BRContainer *_container;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000001d513
- (id)sortPath;	// IMP=0x000000000001d49d
- (id)modificationDate;	// IMP=0x000000000001d44d
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(_Bool *)arg3;	// IMP=0x000000000001d3a3
- (id)url;	// IMP=0x000000000001d386
- (id)subtitle;	// IMP=0x000000000001d371
- (void)_modelChanged;	// IMP=0x000000000001d2bc
- (id)title;	// IMP=0x000000000001d199
- (long long)type;	// IMP=0x000000000001d18e
@property(readonly, nonatomic) BRContainer *container;
- (id)initWithContainer:(id)arg1;	// IMP=0x000000000001d10b

@end

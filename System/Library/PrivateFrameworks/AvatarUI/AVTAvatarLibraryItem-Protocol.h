//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSString, UICollectionViewCell, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarLibraryItem <NSObject>
+ (NSString *)cellIdentifier;
- (void)configureCell:(UICollectionViewCell *)arg1 imageProvider:(_AVTAvatarRecordImageProvider *)arg2;
@end

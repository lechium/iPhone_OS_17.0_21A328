//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIcon, UIImage;

@protocol SBFolderIconGridCellImageProvider <NSObject>
- (UIImage *)gridCellImageOfSize:(struct CGSize)arg1 forIcon:(SBIcon *)arg2 iconImageInfo:(struct SBIconImageInfo)arg3;

@optional
- (_Bool)shouldSkipGridCellImageForIcon:(SBIcon *)arg1;
@end

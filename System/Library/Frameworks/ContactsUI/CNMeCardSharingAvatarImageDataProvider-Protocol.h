//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNWallpaper, NSData;

@protocol CNMeCardSharingAvatarImageDataProvider <NSObject>
@property(readonly, nonatomic) CNWallpaper *wallpaper;
@property(readonly, nonatomic) NSData *thumbnailImageData;
@property(readonly, nonatomic) struct CGRect cropRect;
@property(readonly, nonatomic) NSData *imageData;
@end


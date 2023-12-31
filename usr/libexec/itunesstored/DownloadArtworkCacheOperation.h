//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSURL;

@interface DownloadArtworkCacheOperation : ISOperation
{
    NSData *_artworkData;	// 96 = 0x60
    long long _downloadID;	// 104 = 0x68
    _Bool _isStoreDownload;	// 112 = 0x70
    NSURL *_thumbnailURL;	// 120 = 0x78
}

- (void)_setArtworkData:(id)arg1;	// IMP=0x00200000000d0ef1
- (void)run;	// IMP=0x00100000000d0878
@property(readonly) NSData *artworkData;
- (void)dealloc;	// IMP=0x00100000000d07cb
- (id)initWithStoreDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2;	// IMP=0x00100000000d074f
- (id)initWithDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2;	// IMP=0x00100000000d06df

@end


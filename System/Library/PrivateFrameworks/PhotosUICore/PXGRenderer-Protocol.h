//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSURL, PXGChangeDetails, PXGEntityManager, PXGLayout, PXGSpriteDataStore, PXGSpriteMetadataStore, PXScrollViewController;
@protocol PXGRendererDelegate, PXGTextureConverter, PXGTungstenRecordingSession;

@protocol PXGRenderer <NSObject>
@property(readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property(readonly, nonatomic) _Bool wantsMipmaps;
@property(readonly, nonatomic) _Bool wantsBGRATextures;
@property(readonly, nonatomic) _Bool wantsToDriveRender;
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter;
@property(readonly, nonatomic) unsigned char presentationType;
@property(nonatomic) _Bool lowMemoryMode;
@property(nonatomic) struct PXGCameraConfiguration cameraConfiguration;
@property(nonatomic) CDStruct_b6841b77 interactionState;
@property(nonatomic) struct CGRect visibleRect;
@property(retain, nonatomic) PXGEntityManager *entityManager;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate;
- (id <PXGTungstenRecordingSession>)startRecordingToDirectoryURL:(NSURL *)arg1;
- (void)releaseResources;
- (void)renderSpritesWithTextures:(NSArray *)arg1 dataStore:(PXGSpriteDataStore *)arg2 presentationDataStore:(PXGSpriteDataStore *)arg3 presentationMetadataStore:(PXGSpriteMetadataStore *)arg4 layout:(PXGLayout *)arg5;
- (void)updateWithChangeDetails:(PXGChangeDetails *)arg1;
- (void)renderImmediately;
- (void)setNeedsRender;

@optional
@property(copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler;
@property(retain, nonatomic) PXScrollViewController *scrollViewController;
@end


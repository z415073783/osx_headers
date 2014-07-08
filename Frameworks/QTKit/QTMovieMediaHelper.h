//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QTMovieAttributes.h"

@class NSDictionary, QTImageConsumerFanOut, QTMovie, QTVisualContextRenderer;

__attribute__((visibility("hidden")))
@interface QTMovieMediaHelper : NSObject <QTMovieAttributes>
{
    QTMovie *_qtMovie;
    QTImageConsumerFanOut *_fanOut;
    QTVisualContextRenderer *_compatibilityVisualContextRenderer;
    id _delegate;
    NSDictionary *_initializationAttributes;
    BOOL _didBecomeMediaHelperForMovie;
}

+ (void)unregisterCurrentThreadWithMediaStack;
+ (void)registerCurrentThreadWithMediaStack;
+ (id)movieTypesWithOptions:(int)arg1;
+ (id)movieFileTypes:(int)arg1;
+ (BOOL)implementsCustomAsyncLoadingForAttributes:(id)arg1;
- (BOOL)setMetadata:(id)arg1 forFormat:(id)arg2;
- (BOOL)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id *)arg3;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)limitReadAhead;
- (void)flipY;
- (void)flipX;
- (void)translate:(struct CGPoint)arg1;
- (void)skew:(struct CGPoint)arg1 around:(struct CGPoint)arg2;
- (void)scale:(float)arg1 around:(struct CGPoint)arg2;
- (void)rotate:(float)arg1 around:(struct CGPoint)arg2;
- (struct CGPoint)centerPoint;
- (BOOL)isMovieMarkedNonSerializable;
- (void)setDefaultDataReference:(char **)arg1 subType:(unsigned int)arg2;
- (BOOL)doneConsideringPlaySelectionOnly;
- (BOOL)containsTrackType:(unsigned int)arg1;
- (id)alternateTrack;
- (void)setChapterTrack:(id)arg1;
- (void)setPostsClosedCaptionDidChangeNotifications:(BOOL)arg1;
- (BOOL)postsNonForcedSubtitleDidChangeNotifications;
- (void)setPostsNonForcedSubtitleDidChangeNotifications:(BOOL)arg1;
- (void)setSubtitles:(id)arg1 flag:(int)arg2;
- (void)setMovieLanguage:(id)arg1 flag:(int)arg2;
- (void)setClosedCaptionsVisible:(BOOL)arg1;
- (BOOL)areClosedCaptionsVisible;
- (BOOL)hasClosedCaptions;
- (id)audioLanguageTracks;
- (id)subtitlesTrack;
- (id)subtitleTracks;
- (id)alternateTracks;
- (void)setSubtitlesVisible:(BOOL)arg1;
- (BOOL)areSubtitlesVisible;
- (BOOL)hasSubtitles;
- (BOOL)addUserData:(id)arg1 ofType:(unsigned int)arg2;
- (id)timeCodeDurationForInfoPanel;
- (id)currentTimeCodeForInfoPanel;
- (BOOL)hasTimeCodeTrack;
- (id)timeCodeTrack;
- (id)sourceString;
- (void)setAudioRenderQuality:(unsigned int)arg1;
- (unsigned int)audioRenderQuality;
- (void)setPitch:(float)arg1;
- (float)pitch;
- (BOOL)usesAudioContext;
- (BOOL)isBuffering;
- (void)setPlayerApertureMode:(unsigned int)arg1;
- (unsigned int)playerApertureMode;
- (void)setConformed:(BOOL)arg1;
- (BOOL)conformed;
- (void)setClassicVolume:(short)arg1;
- (short)classicVolume;
- (BOOL)canSerialize;
- (void)stepFrameBackward;
- (void)stepFrameForward;
- (BOOL)hasVRController;
- (id)internetLocation;
- (id)userDataAnnotations;
- (void)setAutoQuitWhenDone:(BOOL)arg1;
- (void)setAutoCloseWhenDone:(BOOL)arg1;
- (BOOL)autoQuitWhenDone;
- (BOOL)autoCloseWhenDone;
- (double)dynamicFrameRate;
- (BOOL)hasFrameRate;
- (void)setPlaybackRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)playbackRange;
- (long long)findText:(id)arg1 trackIndex:(long long)arg2 startTime:(CDStruct_900afa40)arg3 offset:(long long)arg4 flags:(long long)arg5 retParamName:(unsigned int)arg6;
- (unsigned long long)droppedVideoFrameCount;
- (BOOL)hasApertureModeDimensions;
- (void)setApertureMode:(id)arg1;
- (void)setVisualDrawsMovieBoxBackgroundColor:(BOOL)arg1;
- (void)setVisualMovieBoxBackgroundColor:(id)arg1;
- (void)setVisualBackgroundColor:(id)arg1;
- (id)apertureMode;
- (BOOL)visualMovieBoxIsOpaque;
- (BOOL)visualDrawsMovieBoxBackgroundColor;
- (id)visualMovieBoxBackgroundColor;
- (id)visualBackgroundColor;
- (void)setMovieMatrix:(struct MatrixRecord *)arg1;
- (struct MatrixRecord)movieMatrixWithoutTranslation;
- (struct MatrixRecord)movieMatrix;
- (id)preferredTransform;
- (struct MatrixRecord)originalMovieMatrix;
- (void)removeImageConsumerNoNotify:(id)arg1 flush:(BOOL)arg2;
- (void)addImageConsumerNoNotify:(id)arg1;
- (id)_imageConsumerFanOut;
- (id)imageConsumers;
- (void)removeImageConsumer:(id)arg1 flush:(BOOL)arg2;
- (void)addImageConsumer:(id)arg1;
- (void)setVisualContrast:(float)arg1;
- (void)setVisualBrightness:(float)arg1;
- (void)setVisualSaturation:(float)arg1;
- (void)setVisualHue:(float)arg1;
- (float)visualContrast;
- (float)visualBrightness;
- (float)visualSaturation;
- (float)visualHue;
- (unsigned int)compositingMode;
- (BOOL)wouldUseVisualContext;
- (BOOL)usesVisualContext;
- (void)_invalidatePort;
- (void)_synchronizePortWithWindow;
- (void)_displayInWindowWithNumber:(long long)arg1;
- (void)_syncWithView:(id)arg1;
- (void)_stopUsingGWorlds;
- (void)_startUsingGWorldsUsingWindowRefForPort:(BOOL)arg1;
- (BOOL)_usingWindowRefForPort;
- (void)setAudioChannelLayout:(struct AudioChannelLayout *)arg1 error:(id *)arg2;
- (struct AudioChannelLayout *)audioChannelLayout;
- (void)setAudioDevice:(id)arg1 error:(id *)arg2;
- (void)doEditOperation:(unsigned int)arg1;
- (void)enqueueMovieNotificationName:(id)arg1;
- (void)postMovieNotificationName:(id)arg1 userInfo:(id)arg2 thread:(id)arg3 delay:(BOOL)arg4;
- (void)postMovieNotificationName:(id)arg1 userInfo:(id)arg2 thread:(id)arg3;
- (void)postMovieNotificationName:(id)arg1 thread:(id)arg2;
- (void)postMovieNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postMovieNotificationName:(id)arg1;
- (BOOL)hasWiredActions;
- (void)executeWiredActionsAtTime:(CDStruct_900afa40)arg1;
- (void)executeFrameLoadedActionsAtTime:(CDStruct_900afa40)arg1;
- (void)_setBlocksAllWiredActions:(BOOL)arg1;
- (BOOL)_blocksAllWiredActions;
- (id)targetTrackForInsertFromTrack:(id)arg1;
- (CDStruct_977f9211)minimumRangeForEdit;
- (void)setDataReference:(id)arg1;
- (id)dataReference;
- (void)didBecomeMediaHelperForMovie:(id)arg1;
- (void)willBecomeMediaHelperForMovie:(id)arg1;
- (BOOL)isMediaHelperForParentMovie;
- (void)setQTMovie:(id)arg1;
- (id)qtMovie;
- (void)autoplay:(float)arg1;
- (BOOL)addCVImageBuffer:(struct __CVBuffer *)arg1 forRange:(CDStruct_977f9211)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (void)addToScrap;
- (void)addMovieScaledToSelection:(id)arg1;
- (void)addImage:(id)arg1 forDuration:(CDStruct_900afa40)arg2 atTime:(CDStruct_900afa40)arg3 withAttributes:(id)arg4;
- (id)addTrack:(id)arg1 copyMedia:(BOOL)arg2 error:(id *)arg3;
- (long long)userDataCountOfType:(unsigned int)arg1;
- (BOOL)setUserData:(id)arg1 ofType:(unsigned int)arg2 atIndex:(long long)arg3;
- (BOOL)setUserData:(id)arg1 ofType:(unsigned int)arg2;
- (id)userDataOfType:(unsigned int)arg1 atIndex:(long long)arg2;
- (id)userDataOfType:(unsigned int)arg1;
- (struct UserDataRecord **)userDataRef;
- (BOOL)writeToDataReference:(id)arg1 withAttributes:(id)arg2 error:(id *)arg3;
- (void)setOriginalPreventExternalURLLinksFlag:(BOOL)arg1;
- (void)setOriginalDontAskUnresolvedDataRefsFlag:(BOOL)arg1;
- (void)setOriginalDontResolveDataRefsFlag:(BOOL)arg1;
- (void)setOriginalDontInteractFlag:(BOOL)arg1;
- (void)setOriginalKeepInactiveFlag:(BOOL)arg1;
- (BOOL)originalPreventExternalURLLinksFlag;
- (BOOL)originalDontAskUnresolvedDataRefsFlag;
- (BOOL)originalDontResolveDataRefsFlag;
- (BOOL)originalDontInteractFlag;
- (BOOL)originalKeepInactiveFlag;
- (void)equalizerBandLevels:(struct QTAudioFrequencyLevels *)arg1;
- (void)setNumberOfEqualizerBandLevels:(unsigned int)arg1;
- (unsigned int)numberOfEqualizerBandLevels;
- (unsigned int)numberOfEqualizerDeviceChannels;
- (BOOL)hasEqualizer;
- (void)peakLevels:(struct QTAudioVolumeLevels *)arg1 onMix:(long long)arg2;
- (void)powerLevels:(struct QTAudioVolumeLevels *)arg1 onMix:(long long)arg2;
- (void)setVolumeMeteringEnabled:(BOOL)arg1 onMix:(long long)arg2;
- (BOOL)volumeMeteringEnabled:(long long)arg1;
- (void)setTreble:(float)arg1;
- (void)setGain:(float)arg1;
- (void)setBass:(float)arg1;
- (void)setBalance:(float)arg1;
- (float)treble;
- (float)gain;
- (float)bass;
- (float)balance;
- (void)setCanDRMInteractWithUser:(BOOL)arg1;
- (BOOL)canDRMInteractWithUser;
- (BOOL)isDRMAuthorized;
- (BOOL)isDRMProtected;
- (void)deleteReferencesToTrack:(id)arg1 ofType:(id)arg2;
- (id)addURLTrack:(id)arg1 atTimeRanges:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (id)addTextTrack:(id)arg1 atTimeRanges:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (int)chapterMode;
- (id)currentChapterName;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (unsigned int)currentChapterIndex;
- (id)chapterList;
- (id)chapterTrack;
- (long long)chapterIndexForTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)startTimeOfChapter:(long long)arg1;
- (BOOL)removeChapters;
- (void)addChapters:(id)arg1 withAttributes:(id)arg2 error:(id *)arg3;
- (id)chapters;
- (long long)chapterCount;
- (BOOL)hasChapters;
- (BOOL)isIdling;
- (void)setIdling:(BOOL)arg1;
- (BOOL)detachFromCurrentThread;
- (BOOL)attachToCurrentThread;
- (void)useMovieEditState:(struct MovieStateRecord **)arg1;
- (struct MovieStateRecord **)newMovieEditState;
- (void)setUndoAttributes:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoAttributes;
- (id)undoManager;
- (void)setZoom:(float)arg1;
- (BOOL)isFlashMovie;
- (BOOL)canUndo;
- (BOOL)canPaste;
- (BOOL)canCut;
- (BOOL)canCopy;
- (void)goToNode:(long long)arg1;
- (void)nudge:(long long)arg1;
- (void)zoom:(float)arg1;
- (void)gotoPreviousNode;
- (void)setConstraints:(struct QTVRAngleRangeAtom)arg1 ofKind:(short)arg2;
- (void)setZoomRate:(float)arg1;
- (void)setTiltAngle:(float)arg1;
- (void)setPanTiltSpeed:(float)arg1;
- (void)setPanAngle:(float)arg1;
- (void)setHotspotsVisible:(BOOL)arg1;
- (void)setFieldOfView:(float)arg1;
- (struct QTVRAngleRangeAtom)constraints:(short)arg1;
- (float)zoomRate;
- (float)tiltAngle;
- (float)panTiltSpeed;
- (float)panAngle;
- (int)hotspotCountForNode:(id)arg1;
- (int)hotspotCount;
- (BOOL)hotspotsVisible;
- (float)fieldOfView;
- (id)nodes;
- (id)currentNode;
- (id)nodeAtIndex:(int)arg1;
- (int)nodeCount;
- (BOOL)isVRMovie;
- (id)frameImageAtTime:(CDStruct_900afa40)arg1 withRepresentations:(id)arg2 error:(id *)arg3;
- (BOOL)hasFrameImageAtTime:(CDStruct_900afa40)arg1;
- (BOOL)hasPosterImage;
- (void)removeApertureModeDimensions;
- (void)generateApertureModeDimensions;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)removeTrack:(id)arg1;
- (id)trackByInsertingSegmentOfTrack:(id)arg1 fromRange:(CDStruct_977f9211)arg2 scaledToRange:(CDStruct_977f9211)arg3;
- (id)trackByInsertingSegmentOfTrack:(id)arg1 timeRange:(CDStruct_977f9211)arg2 atTime:(CDStruct_900afa40)arg3;
- (id)insertSegmentOfTrack:(id)arg1 fromRange:(CDStruct_977f9211)arg2 scaledToRange:(CDStruct_977f9211)arg3;
- (id)insertSegmentOfTrack:(id)arg1 timeRange:(CDStruct_977f9211)arg2 atTime:(CDStruct_900afa40)arg3;
- (void)scaleSegment:(CDStruct_977f9211)arg1 newDuration:(CDStruct_900afa40)arg2;
- (void)deleteSegment:(CDStruct_977f9211)arg1;
- (void)insertEmptySegmentAt:(CDStruct_977f9211)arg1;
- (void)insertSegmentOfMovie:(id)arg1 fromRange:(CDStruct_977f9211)arg2 scaledToRange:(CDStruct_977f9211)arg3;
- (void)insertSegmentOfMovie:(id)arg1 timeRange:(CDStruct_977f9211)arg2 atTime:(CDStruct_900afa40)arg3;
- (void)appendSelectionFromMovie:(id)arg1;
- (void)replaceSelectionWithSelectionFromMovie:(id)arg1;
- (CDStruct_900afa40)selectionDuration;
- (CDStruct_900afa40)selectionEnd;
- (CDStruct_900afa40)selectionStart;
- (void)setSelection:(CDStruct_977f9211)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)setRate:(float)arg1;
- (CDStruct_900afa40)keyframeStartTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)frameEndTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)frameStartTime:(CDStruct_900afa40)arg1;
- (void)stepBackward;
- (void)stepForward;
- (void)gotoPosterTime;
- (void)gotoPreviousSelectionPoint;
- (void)gotoNextSelectionPoint;
- (void)gotoEnd;
- (void)gotoBeginning;
- (void)setCurrentTime:(CDStruct_900afa40)arg1 inRange:(CDStruct_977f9211)arg2;
- (void)setCurrentTime:(CDStruct_900afa40)arg1;
- (void)stop;
- (void)play;
- (void)autoplay;
- (BOOL)saveSourceDataToDataReference:(id)arg1 error:(id *)arg2;
- (BOOL)updateMovieFile;
- (BOOL)canUpdateMovieFile;
- (BOOL)writeToFile:(id)arg1 withAttributes:(id)arg2 error:(id *)arg3;
- (id)movieFormatRepresentationAndAnchor;
- (id)movieFormatRepresentation;
- (void *)frameImageAtTime:(CDStruct_900afa40)arg1 withAttributes:(id)arg2 error:(id *)arg3;
- (id)frameImageAtTime:(CDStruct_900afa40)arg1;
- (id)posterImage;
- (id)loadStateError;
- (int)status;
- (void)step:(int)arg1;
- (void)setAllowDynamicResize:(BOOL)arg1;
- (int)movieControllerObjectToken;
- (int)objectToken;
- (id)tracksWithCharacteristic:(id)arg1;
- (id)mediaDataReferenceEnumerator;
- (id)dataReferences;
- (BOOL)hasSkin;
- (unsigned long long)sizeOfDataAtTime:(CDStruct_900afa40)arg1 withDuration:(CDStruct_900afa40)arg2;
- (id)trackByID:(long long)arg1;
- (id)trackByIndexAndType:(long long)arg1 type:(unsigned int)arg2 flags:(long long)arg3;
- (id)trackAtIndex:(int)arg1;
- (int)trackCount;
- (void)getDefaultDataLocatorAttributeKey:(id *)arg1 andValue:(id *)arg2;
- (id)initialDataReference;
- (void)idle;
- (BOOL)usesQuickTime;
- (BOOL)usesFigMedia;
- (void)setTimeScale:(long long)arg1;
- (void)setUsesPreferredLanguage:(BOOL)arg1;
- (void)setSaveable:(BOOL)arg1;
- (void)setHref:(id)arg1;
- (void)setAutoPlay:(BOOL)arg1;
- (void)setFullName:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setAnnotation:(id)arg1 ofType:(unsigned int)arg2;
- (void)setLanguage:(long long)arg1;
- (void)setPreviewRange:(CDStruct_977f9211)arg1;
- (void)setPreviewMode:(BOOL)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredMuted:(BOOL)arg1;
- (void)setPosterTime:(CDStruct_900afa40)arg1;
- (void)setPlaysSelectionOnly:(BOOL)arg1;
- (void)setPlaysAllFrames:(BOOL)arg1;
- (void)setLoopsBackAndForth:(BOOL)arg1;
- (void)setLoops:(BOOL)arg1;
- (void)setDraggable:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setCurrentSize:(struct CGSize)arg1;
- (void)setCopyright:(id)arg1;
- (void)setControllerType:(id)arg1;
- (void)setChanged:(BOOL)arg1;
- (void)setActiveSegment:(CDStruct_977f9211)arg1;
- (void)setAutoAlternates:(BOOL)arg1;
- (void)setActiveAndVisible:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setUseHardwareVideoDecoderIfAvailable:(BOOL)arg1;
- (BOOL)useHardwareVideoDecoderIfAvailable;
- (BOOL)usesHardwareVideoDecoder;
- (float)staticFrameRate;
- (BOOL)isMPEG;
- (BOOL)saveable;
- (unsigned int)movieType;
- (int)dataRate;
- (CDStruct_900afa40)maxTimeLoaded;
- (BOOL)isAutoPlay;
- (BOOL)done;
- (long long)language;
- (BOOL)hasLanguages;
- (id)href;
- (id)trackEnumerator;
- (id)URL;
- (long long)timeScale;
- (CDStruct_977f9211)selection;
- (BOOL)rateChangePreservesPitch;
- (CDStruct_977f9211)previewRange;
- (BOOL)previewMode;
- (float)preferredVolume;
- (float)preferredRate;
- (BOOL)preferredMuted;
- (CDStruct_900afa40)posterTime;
- (BOOL)playsSelectionOnly;
- (BOOL)playsAllFrames;
- (struct CGSize)naturalSize;
- (id)modificationTime;
- (id)MIMEType;
- (BOOL)loopsBackAndForth;
- (BOOL)loops;
- (id)loadedRanges;
- (id)availableRanges;
- (long long)loadState;
- (BOOL)isSteppable;
- (BOOL)isMIAM;
- (BOOL)isStreaming;
- (BOOL)isLoopable;
- (id)missingComponentsWithOptions:(id)arg1;
- (id)interactivityFeatures;
- (BOOL)isLinear;
- (BOOL)isInteractive;
- (BOOL)isChanged;
- (BOOL)isActive;
- (BOOL)hasQuartzComposer;
- (BOOL)hasVideo;
- (BOOL)hasDuration;
- (BOOL)hasAudio;
- (id)fileName;
- (BOOL)draggable;
- (BOOL)editable;
- (id)displayName;
- (unsigned long long)dataSize;
- (struct CGSize)currentSize;
- (id)creationTime;
- (id)copyright;
- (id)controllerType;
- (CDStruct_977f9211)activeSegment;
- (id)artist;
- (id)author;
- (id)annotationsExtended;
- (id)annotations;
- (id)annotationsWithCommonKeys;
- (id)commonMetadataForQTAnnotations:(id)arg1;
- (id)information;
- (id)metaDataDescription;
- (id)albumArtworkAttributes;
- (id)albumArtworkMovie;
- (id)album;
- (id)comments;
- (id)genre;
- (id)fullName;
- (id)format;
- (BOOL)isPlaying;
- (BOOL)autoAlternates;
- (id)tracksOfMediaType:(id)arg1;
- (id)tracks;
- (BOOL)isMuted;
- (float)volume;
- (float)rate;
- (CDStruct_900afa40)currentTime;
- (CDStruct_900afa40)duration;
- (void)copyRenderingStateFromMediaHelper:(id)arg1;
- (void)copyDeepStateFromMediaHelper:(id)arg1;
- (void)copyStateFromMediaHelper:(id)arg1;
- (id)copyWithZoneDeep:(struct _NSZone *)arg1 forParent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 forParent:(id)arg2;
- (BOOL)openedForPlayback;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)setMovieAttributes:(id)arg1;
- (id)movieAttributesForVisibility:(unsigned long long)arg1 requireChangeNotification:(BOOL)arg2 nilMarker:(id)arg3;
- (id)_writableAttributeKeysForVisibility:(unsigned long long)arg1;
- (id)_readableAttributeKeysForVisibility:(unsigned long long)arg1;
- (id)diagnosticString;
- (id)description;
- (void)dealloc;
- (void)invalidate;
- (int)proxy;
- (id)initWithAttributes:(id)arg1 error:(id *)arg2 forParent:(id)arg3;
- (id)init;

@end

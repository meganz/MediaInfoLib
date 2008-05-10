// File_Mpeg4 - Info for MPEG-4 files
// Copyright (C) 2004-2008 Jerome Martinez, Zen@MediaArea.net
//
// This library is free software: you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library. If not, see <http://www.gnu.org/licenses/>.
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
#ifndef MediaInfo_File_Mpeg4H
#define MediaInfo_File_Mpeg4H
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include "MediaInfo/File__Analyze.h"
#include <map>
class File_MpegPs;
//---------------------------------------------------------------------------

namespace MediaInfoLib
{

//***************************************************************************
// Class File_Mpeg4
//***************************************************************************

class File_Mpeg4 : public File__Analyze
{
protected :
    //Format
    void Read_Buffer_Continue ();
    void Read_Buffer_Finalize();

    //Information
    void HowTo (stream_t StreamKind);

public :
    File_Mpeg4();
    ~File_Mpeg4();

private :
    //Buffer
    void Header_Parse();
    void Data_Parse();

    //mdat specific
    void mdat_Parse();
    File__Base* mdat_Info;

    //Elements
    void free();
    void ftyp();
    void idat();
    void idsc();
    void mdat();
    void moov();
    void moov_cmov();
    void moov_cmov_cmvd();
    void moov_cmov_cmvd_zlib();
    void moov_cmov_dcom();
    void moov_ctab();
    void moov_iods();
    void moov_meta();
    void moov_meta_hdlr();
    void moov_meta_bxml();
    void moov_meta_keys();
    void moov_meta_keys_mdta();
    void moov_meta_ilst();
    void moov_meta_ilst_xxxx();
    void moov_meta_ilst_xxxx_data();
    void moov_meta_ilst_xxxx_mean();
    void moov_meta_ilst_xxxx_name();
    void moov_meta_xml();
    void moov_mvhd();
    void moov_trak();
    void moov_trak_edts();
    void moov_trak_edts_elst();
    void moov_trak_mdia();
    void moov_trak_mdia_hdlr();
    void moov_trak_mdia_mdhd();
    void moov_trak_mdia_minf();
    void moov_trak_mdia_minf_dinf();
    void moov_trak_mdia_minf_dinf_url();
    void moov_trak_mdia_minf_dinf_urn();
    void moov_trak_mdia_minf_dinf_dref();
    void moov_trak_mdia_minf_dinf_dref_url();
    void moov_trak_mdia_minf_dinf_dref_urn();
    void moov_trak_mdia_minf_hint();
    void moov_trak_mdia_minf_hdlr();
    void moov_trak_mdia_minf_hmhd();
    void moov_trak_mdia_minf_nmhd();
    void moov_trak_mdia_minf_smhd();
    void moov_trak_mdia_minf_vmhd();
    void moov_trak_mdia_minf_stbl();
    void moov_trak_mdia_minf_stbl_ctts();
    void moov_trak_mdia_minf_stbl_stco();
    void moov_trak_mdia_minf_stbl_stdp();
    void moov_trak_mdia_minf_stbl_stsc();
    void moov_trak_mdia_minf_stbl_stsd();
    void moov_trak_mdia_minf_stbl_stsd_xxxx();
    void moov_trak_mdia_minf_stbl_stsd_xxxxSound();
    void moov_trak_mdia_minf_stbl_stsd_xxxxVideo();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_avcC();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_alac();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_btrt();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_chan();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_dac3();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_damr();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_esds();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_wave();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_wave_frma();
    void moov_trak_mdia_minf_stbl_stsd_xxxx_wave_xxxx();
    void moov_trak_mdia_minf_stbl_stsh();
    void moov_trak_mdia_minf_stbl_stss();
    void moov_trak_mdia_minf_stbl_stsz();
    void moov_trak_mdia_minf_stbl_stts();
    void moov_trak_tapt();
    void moov_trak_tapt_clef();
    void moov_trak_tapt_prof();
    void moov_trak_tapt_enof();
    void moov_trak_tkhd();
    void moov_trak_tref();
    void moov_trak_tref_dpnd();
    void moov_trak_tref_ipir();
    void moov_trak_tref_hint();
    void moov_trak_tref_mpod();
    void moov_trak_tref_sync();
    void moov_trak_tref_tmcd();
    void moov_udta();
    void moov_udta_AllF();
    void moov_udta_chpl();
    void moov_udta_cprt();
    void moov_udta_FIEL();
    void moov_udta_FXTC();
    void moov_udta_hinf();
    void moov_udta_hinv();
    void moov_udta_hnti();
    void moov_udta_hnti_rtp ();
    void moov_udta_LOOP();
    void moov_udta_MCPS();
    void moov_udta_meta();
    void moov_udta_meta_hdlr();
    void moov_udta_meta_ilst();
    void moov_udta_meta_ilst_xxxx();
    void moov_udta_meta_ilst_xxxx_data();
    void moov_udta_meta_ilst_xxxx_mean();
    void moov_udta_meta_ilst_xxxx_name();
    void moov_udta_nsav();
    void moov_udta_ptv ();
    void moov_udta_Sel0();
    void moov_udta_WLOC();
    void moov_udta_XMP_();
    void moov_udta_xxxx();
    void pckg();
    void pnot();
    void skip();
    void wide();

    //Helpers
    bool Element_Level_Get();
    bool Element_Name_Get();
    bool Element_Size_Get();
    char* Language_Get(int Language);
    enum method
    {
        Method_None,
        Method_String,
        Method_String2,
        Method_String3,
        Method_Integer,
        Method_Binary
    };
    method Metadata_Get(std::string &Parameter, int64u Meta);
    method Metadata_Get(std::string &Parameter, const std::string &Meta);
    void Descriptors();

    //Temp
    bool List;
    struct mdat_Pos_Type
    {
        stream_t StreamKind;
        size_t   StreamPos;
    };
    std::map<int64u, mdat_Pos_Type>         mdat_Pos;
    bool                                    mdat_MustParse;
    bool                                    moov_Done;
    int32u                                  moov_cmov_dcom_Compressor;
    int32u                                  moov_meta_hdlr_Type;
    std::string                             moov_meta_ilst_xxxx_name_Name;
    int32u                                  moov_trak_mdia_mdhd_Duration;
    int32u                                  moov_trak_mdia_mdhd_TimeScale;
    std::vector<int32u>                     moov_trak_mdia_minf_stbl_stco_ID;
    int32u                                  moov_trak_mdia_minf_stbl_stco_Parse;
    std::map<int32u, std::vector<int64u>*>  moov_trak_mdia_minf_stbl_stco_Map;
    std::map<int32u, std::vector<int64u>*>  moov_trak_mdia_minf_stbl_stsz_Map;
    int32u                                  moov_trak_tkhd_TrackID;
    std::vector<std::string>                moov_udta_meta_keys_List;
    size_t                                  moov_udta_meta_keys_ilst_Pos;
    char                                    Language_Result[4];
};

} //NameSpace

#endif

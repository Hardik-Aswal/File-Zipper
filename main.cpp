image = (int**)malloc(height * sizeof(int*));

    for (i = 0; i < height; i++)

    {

        image[i] = (int*)malloc(width * sizeof(int));

    }

    int numbytes = (bmpsize - bmpdataoff) / 3; 

    for (i = 0; i < height; i++) 

    {

        for (j = 0; j < width; j++)

        {

            fread(&temp, 3, 1, image_file);

            temp = temp & 0x0000FF; 

            image[i][j] = temp;

        }

    }

}
